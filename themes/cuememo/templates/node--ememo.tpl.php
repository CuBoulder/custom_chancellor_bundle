<?php 
  global $base_url; 
  $theme_path = drupal_get_path('theme', 'cuememo');
  
  $path = $base_url . '/' . $theme_path;
?>
<?php hide($content['field_ememo_news']); ?>
<?php hide($content['field_ememo_block']); ?>
<?php hide($content['field_ememo_greeting']); ?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
	<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
	<meta name="viewport" content="width=device-width"/>
</head>
<body>
	<table class="body">
		<tr>
			<td class="center" align="center" valign="top">
        <center>

          
          <table class="row header">
            <tr>
              <td class="center" align="center">
                <center>

                  <table class="container">
                    <tr>
                      <td class="wrapper last">

                        <table class="twelve columns">
                          <tr>
                            <td class="view-on-web">
                              <a href="<?php print $base_url . '/node/' . $node->nid; ?>">View on website</a>
                            </td>
                            <td class="expander"></td>
                          </tr>
                        </table>

                      </td>
                    </tr>
                  </table>

                  
                  
                  
                  
                  <table class="container">
                    <tr>
                      <td class="wrapper last">

                        <table class="twelve columns">
                          <tr>
                            <td>
                              <img src="<?php print $path; ?>/images/culogo.png" alt="University of Colorado Boulder" />
                            </td>
                            <td class="expander"></td>
                          </tr>
                        </table>

                      </td>
                      
                      
                    </tr>
                  </table>

                </center>
              </td>
            </tr>
          </table>

          
          <table class="row title">
            <tr>
              <td class="center" align="center">
                <center>

                  <table class="container">
                    <tr>
                      <td class="wrapper display-title last">

                    <table class="twelve columns">
                      <tr>
                        <td>

                          <h1 style="margin:0;" class="email-title"><?php print render($content['field_ememo_display_title']); ?></h1>
                          
                        </td>
                        <td class="expander"></td>
                      </tr>
                    </table>

                  </td>
                  
                

                    </tr>
                  </table>

                </center>
              </td>
            </tr>
          </table>

          <?php if(!empty($content['field_ememo_sub_title'])): ?>
          <table class="row subtitle">
            <tr>
              <td class="center" align="center">
                <center>

                  <table class="container">
                    <tr>
                      <td class="wrapper last">

                        <table class="twelve columns">
                          <tr>
                            <td>
                              
                                <h2 class="email-subtitle"><?php print render($content['field_ememo_sub_title']); ?></h2>
                                
                              
                            </td>
                            <td class="expander"></td>
                          </tr>
                        </table>
    
                      </td>
                    </tr>
                  </table>

                </center>
              </td>
            </tr>
          </table>
          <?php endif; ?>

          <table class="container main-content">
            <tr>
              <td>

             
              
              <!-- top photo/greeting start -->
              <table class="row">
                <tr>
                  <td class="wrapper last">

                    <table class="twelve columns">
                      <tr>
                        <td>
                          <?php if(!empty($content['field_ememo_top_photo'])): ?>
                            <?php print render($content['field_ememo_top_photo']); ?>
                            <p><?php print render($content['field_ememo_top_photo_caption']); ?></p>
                            
                          <?php endif; ?>
                        </td>
                        <td class="expander"></td>
                      </tr>
                    </table>

                  </td>
                </tr>
              </table>

              <br>  <!-- Break Tag for row -->
              
              
              <!-- section content start -->
              <table class="row">
                <tr>
                  <td class="wrapper last">

                    <table class="twelve columns">
                      <tr>
                        <td>
                          <p>Dear ${.vars["personalizedtags__first"]},</p>
                          <?php print render($content); ?>
                        </td>
                        <td class="expander"></td>
                      </tr>
                    </table>

                  </td>
                </tr>
              </table>

              <br>  <!-- Break Tag for row -->
              




              <!-- container end below -->
              </td>
            </tr>
          </table>
          
          
          <!-- blocks -->
          <?php if(!empty($content['field_ememo_news']) || !empty($content['field_ememo_block'])): ?>
          
            <?php if(!empty($content['field_ememo_news']) && !empty($content['field_ememo_block'])): ?>
              <table class="row blocks">
                <tr>
                  <td class="center" align="center">
                    <center>
    
                      <table class="container">
                        <tr>
                          <td class="wrapper">
    
                        <table class="eight columns">
                          <tr>
                            <td>
    
                              <?php print render($content['field_ememo_news']); ?>
                              
                            </td>
                            <td class="expander"></td>
                          </tr>
                        </table>
    
                      </td>
                      <td class="wrapper last">
    
                        <table class="four columns">
                          <tr>
                            <td>
    
                              <?php print render($content['field_ememo_block']); ?>
                              
                            </td>
                            <td class="expander"></td>
                          </tr>
                        </table>
                      </td>
    
                        </tr>
                      </table>
    
                    </center>
                  </td>
                </tr>
              </table>
            
            <?php else: ?>
              <table class="row">
                <tr>
                  <td class="wrapper last">

                    <table class="twelve columns">
                      <tr>
                        <td>
                          <?php 
                            if(!empty($content['field_ememo_news'])) {
                              print render($content['field_ememo_news']);
                            }
                            if(!empty($content['field_ememo_block'])) {
                              print render($content['field_ememo_block']);
                            }
                          ?>
                        </td>
                        <td class="expander"></td>
                      </tr>
                    </table>

                  </td>
                </tr>
              </table>
            <?php endif; ?>
          <?php endif; ?>
          <!-- end blocks -->
          
          <!-- footer -->
          
          <table class="row footer">
            <tr>
              <td class="center" align="center">
                <center>

                  <table class="container">
                    <tr>
                      <td class="wrapper last">

                    <table class="twelve columns">
                      <tr>
                        <td>

                          <center>
                            <img src="<?php print $path; ?>/images/beboulder-black.png" alt="Be Boulder. University of Colorado Boulder" style="margin:20px 0; "/>
                          </center>
                          
                        </td>
                        <td class="expander"></td>
                      </tr>
                    </table>
                    <br />
                    
                    <table class="twelve columns">
                      <tr>
                        <td>

                          <center>
                            <small>
                            Office of the Chancellor | University Administrative Center, 914 Broadway<br />
Boulder, CO 80309 | Phone: 303-492-8908<br /><br />
                            
                            Your record ID number is ${.vars["oldpersonaltags__security_info"]}.<br />
                            <a href='${.vars["linktags__unsubscribe_link_html"]}'>Manage your subscriptions or unsubscribe from this email</a>.
                            ${.vars[“generaltags__open_count"]}
                            </small> 
                          </center>
                          
                        </td>
                        <td class="expander"></td>
                      </tr>
                    </table>

                  </td>

                    </tr>
                  </table>

                </center>
              </td>
            </tr>
          </table>
          <!-- end blocks -->

        </center>
			</td>
		</tr>
	</table>
</body>
</html>
