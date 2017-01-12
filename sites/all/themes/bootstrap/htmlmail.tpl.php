<?php
/**
 * @file
 * ITS basic template for HTML Mail
 */
$template_name = basename(__FILE__);
$current_path = realpath(NULL);
$current_len = strlen($current_path);
$template_path = realpath(dirname(__FILE__));
if (!strncmp($template_path, $current_path, $current_len)) {
    $template_path = substr($template_path, $current_len + 1);
}
$template_url = url($template_path, array('absolute' => TRUE));
?>
<html>
    <head>
        <title>iTS Logistical Dispatch</title>
    </head>
    <body style="background: #969696;">
        <table style="border-collapse: collapse; background: #FFFFFF; width: 600px; color: #555; display: block; font-family: Helvetica Neue, Helvetica, Arial, sans-serif; border: 1px solid #494949; box-shadow: 1px 1px 1px #5B5959; margin: 50px auto;">
            <tr>
                <td style="vertical-align: top; padding: 30px 50px; font-size: 17px;">
<!-- Content Begins -->
                    <?php echo $body; ?>
<!-- Content Ends -->
                </td>
            </tr>
             <tr>
                <td style="vertical-align: top; padding: 30px 50px; font-size: 12px; line-height: 1.5em;color: #ffffff; background-color: #888888;">
                    <p style="text-align: center;"><a href="http://itoysoldiers.com/user" style="color: #F0F8FF; text-decoration: none;">My Account</a> | <a href="http://help.itoysoldiers.com" style="color: #F0F8FF; text-decoration: none;">Help</a></p>

                    <p style="text-align: center;"><a href="http://itoysoldiers.com" style="color: #F0F8FF; text-decoration: none;">iToysoldiers 24 Azar Avenue, Tilbury, Ontario, N0P 2L0, Canada</a></p>
                    
                    <p><small>You are receiving this email because you signed up for <a href="http://itoysoldiers.com" style="color: #F0F8FF; text-decoration: none;">iToysoldiers.com</a>.<br>Review our <a href="http://itoysoldiers.com/privacy" style="color: #F0F8FF; text-decoration: none;">Privacy Policy</a> for more information about our email practices.</small></p>
                </td>
            </tr>
        </table>
    </body>
</html>