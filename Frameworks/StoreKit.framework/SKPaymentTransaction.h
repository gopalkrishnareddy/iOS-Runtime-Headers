/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@class NSError, SKPayment, NSString, NSDate, NSData, SKPaymentTransaction;

@interface SKPaymentTransaction : NSObject  {
    id _internal;
}

@property(readonly) NSError * error;
@property(readonly) SKPaymentTransaction * originalTransaction;
@property(readonly) SKPayment * payment;
@property(readonly) NSDate * transactionDate;
@property(readonly) NSString * transactionIdentifier;
@property(readonly) NSData * transactionReceipt;
@property(readonly) int transactionState;


- (id)init;
- (void)dealloc;
- (id)error;
- (id)transactionReceipt;
- (id)payment;
- (id)originalTransaction;
- (BOOL)mergeWithTransaction:(id)arg1;
- (BOOL)canMergeWithTransaction:(id)arg1;
- (id)_transactionIdentifier;
- (id)initWithPayment:(id)arg1;
- (id)matchingIdentifier;
- (int)transactionState;
- (id)initWithDictionary:(id)arg1;
- (id)transactionIdentifier;
- (id)transactionDate;

@end