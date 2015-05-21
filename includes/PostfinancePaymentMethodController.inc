<?php

/**
 * Contains PostfinancePaymentMethodController.
 */

/**
 * Postfinance payment method.
 */
class PostfinancePaymentMethodController extends PaymentMethodController {

  public $controller_data_defaults = array(
    'pspid' => '',
    'DefaultPM' => 0,
    'shop_uri' => 'Web-Shop',
    'cancel_uri' => 'Order-Cancelled',
    //'currency_code' => in_array($default_currency, array_keys(payment_postfinance_transform_languages())) ? $default_currency : 'CHF',
    'currency_code' => 'CHF',
    'language' => 'fr_FR',
    'server' => 'test',
    'server_encoding' => 'utf',
    'payment_security' => 'sha512',
    'payment_security_key' => '',
    'reply_security_key' => '',
    'order_prefix' => '',
    'template_page' => 'http://payment.drupal-solutions.ch/TemplatePage.html',
    'bgcolor' => '',
    'txtcolor' => '',
    'title' => '',
    'logo' => '',
  );

  public $payment_method_configuration_form_elements_callback = 'payment_postfinance_payment_method_configuration_form_elements';

  function __construct() {
    $this->title = t('Postfinance e-Payment');
    $this->description = t("A generic Postfinance payment method that allow user to select the payment mode on the payment page provided by <em>La Poste</em>.");
  }

  /**
   * Implements PaymentMethodController::validate().
   */
  function validate(Payment $payment, PaymentMethod $payment_method, $strict) {
  }

  /**
   * Implements PaymentMethodController::execute().
   */
  function execute(Payment $payment) {
    entity_save('payment', $payment);
    $_SESSION['payment_postfinance_pid'] = $payment->pid;
    drupal_goto('payment_postfinance/redirect/' . $payment->pid);
  }

  /**
   * Hashes a Payment PID.
   *
   * @param integer $pid
   *
   * @return string
   */
  static function hashPID($pid) {
    return hash('sha256', $pid . drupal_get_hash_salt());
  }

}