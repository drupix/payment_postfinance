<?php

/**
 * Contains PostfinancePaymentMethodController.
 */

/**
 * Postfinance VISA payment method.
 */

class PostfinanceVisaPaymentMethodController extends PostfinancePaymentMethodController {

  function __construct() {
    $this->title = t('Postfinance VISA');
  }

}
