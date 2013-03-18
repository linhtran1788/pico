// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>

/**
 @file
 
 Indicates whether the order is complete, incomplete, or pending.
 
 
 @ingroup EBayAPIInterface
*/

/**
 
 The order is incomplete. Generally speaking, an order is incomplete when payment
 from the buyer has yet to be initiated.
 
*/
extern NSString *const Trading_CompleteStatusCodeType_INCOMPLETE;

/**
 
 The order is complete. Generally speaking, an order is complete when payment
 from the buyer has been initiated and processed.
 <br><br>
 <b>Note</b>: If the PaymentMethod is CashOnPickup, the
 CheckoutStatus.Status value in GetOrders will read Complete right at Checkout,
 even though the seller may not have been officially paid yet. The
 CheckoutStatus.Status value in GetOrders will remain as Complete even if the
 seller uses ReviseCheckoutStatus to change the checkout status to Pending.
 However, the eBayPaymentStatus value in GetOrders will change from
 NoPaymentFailure to PaymentInProcess.
 
*/
extern NSString *const Trading_CompleteStatusCodeType_COMPLETE;

/**
 
 The order is pending. Generally speaking, an order is pending when payment
 from the buyer has been initiated but has yet to be fully processed.
 <br><br>
 <b>Note</b>: If the PaymentMethod is CashOnPickup, the
 CheckoutStatus.Status value in GetOrders will read Complete right at Checkout,
 even though the seller may not have been officially paid yet. The
 CheckoutStatus.Status value in GetOrders will remain as Complete even if the
 seller uses ReviseCheckoutStatus to change the checkout status to Pending.
 However, the eBayPaymentStatus value in GetOrders will change from
 NoPaymentFailure to PaymentInProcess.
 
*/
extern NSString *const Trading_CompleteStatusCodeType_PENDING;

/**
 
 Reserved for internal or future use
 
*/
extern NSString *const Trading_CompleteStatusCodeType_CUSTOM_CODE;