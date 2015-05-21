<?php

/**
 * Contains PostfinancePaymentMethodController.
 */

/**
 * Postfinance American Express payment method.
 */
class PostfinanceAmexcoPaymentMethodController extends PostfinancePaymentMethodController {

  function __construct() {
    $this->title = t('Postfinance American Express');
  }

}
