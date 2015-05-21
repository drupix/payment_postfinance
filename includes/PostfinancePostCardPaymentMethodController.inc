<?php

/**
 * Contains PostfinancePaymentMethodController.
 */

/**
 * Postfinance PostCard payment method.
 */

class PostfinancePostCardPaymentMethodController extends PostfinancePaymentMethodController {

  function __construct() {
    $this->title = t('Postfinance PostCard');
  }

}
