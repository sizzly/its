<?php
//PHP's GD class functions can create a variety of output image 
//types, this example creates a jpeg 
header("Content-Type: image/png"); 
$userid = $_GET['user_id'];

$record_file = "http://itoysoldiers.com/widget/". $userid ."/record.txt";
$name_file = "http://itoysoldiers.com/widget/". $userid ."/name.txt";
$avatar_file = "http://itoysoldiers.com/widget/". $userid ."/avatar.txt";

$record = file_get_contents($record_file);
$name = file_get_contents($name_file);
$avatar = file_get_contents($avatar_file);
//open up the image you want to put text over 
$im = ImageCreateFromPng("template.png");  

//The numbers are the RGB values of the color you want to use 
$white = ImageColorAllocate($im, 255, 255, 255); 

//The canvas's (0,0) position is the upper left corner 
//So this is how far down and to the right the text should start 
$start_x = 70; 
$start_y = 30; 

$filter1 = 1;
foreach(preg_split("/((\r?\n)|(\r\n?))/", $name) as $line){
    if ($filter1 < 2) {
        Imagettftext($im, 20, 0, $start_x, $start_y, $white, 'ARDESTINE.ttf', $line);
        $filter1 = $filter1 + 1;
    }
}
$filter2 = 1;
foreach(preg_split("/((\r?\n)|(\r\n?))/", $avatar) as $line){
    if ($filter2 < 2) {
        $avatar_image = imagecreatefromstring(file_get_contents($line));
        $filter2 = $filter2 + 1;
    }
}
//$avatar_image = imagecreatefromstring(file_get_contents($avatar));
foreach(preg_split("/((\r?\n)|(\r\n?))/", $record) as $line){
    if (strpos($line,'Victory') !== false) {
        Imagettftext($im, 10, 0, 200, 20, $white, 'verdana.ttf', $line);
    }
    if (strpos($line,'Draw') !== false) {
        Imagettftext($im, 10, 0, 200, 35, $white, 'verdana.ttf', $line);
    }
    if (strpos($line,'Defeat') !== false) {
        Imagettftext($im, 10, 0, 200, 50, $white, 'verdana.ttf', $line);
    }
}
imagecopyresampled($im, $avatar_image, 2, 2, 0, 0, 60, 60, imagesx($avatar_image), imagesy($avatar_image));

Imagepng($im); 

ImageDestroy($im);
ImageDestroy($avatar_image);

?>
