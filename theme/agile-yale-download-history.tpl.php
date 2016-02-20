<fieldset class="wiki-download-history collapsible collapsed">
  <legend><span class="fieldset-legend">
    <?php print(t('Revision history'));?></span></legend>
  <div class="fieldset-wrapper">
    <ul>
      <?php if (isset($variables['history_download_link'])): ?>
        <li>
          <?php print $variables['history_download_link']; ?>
        </li>
      <?php endif; ?>
      <?php if (isset($variables['current_versions_link'])): ?>
        <li>
          <?php print $variables['current_versions_link']; ?>
        </li>
      <?php endif; ?>
    </ul>
  </div>
</fieldset>