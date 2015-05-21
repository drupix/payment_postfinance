<?php

/**
 * Contains PostfinancePaymentMethodController.
 */

/**
 * Postfinance MasterCard payment method.
 */
class PostfinanceMasterCardPaymentMethodController extends PostfinancePaymentMethodController {

  function __construct() {
    $this->title = t('Postfinance MasterCard');
  }

}
