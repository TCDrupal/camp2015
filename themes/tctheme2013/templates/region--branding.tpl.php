<div<?php print $attributes; ?>>
  <div<?php print $content_attributes; ?>>
    <div class="branding-data clearfix">
      <div class="grid-2 alpha logo-img">
        <a href="<?php print url('<front>'); ?>"><img src="<?php print url(drupal_get_path('theme', 'tctheme2013'), array('absolute' => TRUE)); ?>/images/logo.png" height="105px" width="168px" alt="Logo" /></a>
      </div>
      <?php if ($site_name || $site_slogan): ?>
      <?php $class = $site_name_hidden && $site_slogan_hidden ? ' element-invisible' : ''; ?>
      <hgroup class="site-name-slogan<?php print $class; ?>">
        <h1 class="site-name<?php print $class; ?>">
          <a href="<?php print url('<front>'); ?>">
            <span class="left grid-3"><?php print t('Drupal Camp'); ?></span>
            <span class="right grid-3"><?php print t('Twin Cities'); ?></span>
          </a>
        </h1>
      </hgroup>
      <?php endif; ?>
      <div class="grid-4 omega register-block">
        <div class="pointer"></div>
        <a href="<?php print url('register'); ?>"><span><?php print t('August 7th-10th, 2014'); ?></span><?php print t('Register Now!'); ?></a>
      </div>
    </div>
    <?php print $content; ?>
  </div>
</div>