<?php

/**
 * Contains PostfinancePaymentMethodController.
 */

/**
 * Postfinance PayPal payment method.
 */
class PostfinancePaypalPaymentMethodController extends PostfinancePaymentMethodController {

  function __construct() {
    $this->title = t('Postfinance PayPal');
  }

}
