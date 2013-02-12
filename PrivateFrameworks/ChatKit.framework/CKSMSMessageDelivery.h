/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class CKSMSMessage, NSString;

@interface CKSMSMessageDelivery : NSObject {
    unsigned int _isSending : 1;
    NSInteger _associationID;
    NSInteger _group;
    CKSMSMessage *_message;
    NSString *_text;
}

@property CKSMSMessage *message; /* unknown property attribute: V_message */

- (void)_errorSendingMessage:(struct __CKSMSRecord { }*)arg1;
- (void)_fakeSendMessage:(struct __CKSMSRecord { }*)arg1 afterDelay:(double)arg2;
- (void)_finishedSendingMessages;
- (void)_notifyDelegatesOfMessageDelivery:(struct __CKSMSRecord { }*)arg1 success:(BOOL)arg2;
- (struct { NSInteger x1; NSInteger x2; })_sendMessage:(struct __CKSMSRecord { }*)arg1;
- (void)_sentMessage:(struct __CKSMSRecord { }*)arg1;
- (void)dealloc;
- (id)init;
- (BOOL)isSending;
- (id)message;
- (float)progress;
- (void)redeliverPartiallyFailedMessage;
- (void)sendMessage;
- (void)sendOutboundMessage:(struct __CKSMSRecord { }*)arg1;
- (void)setMessage:(id)arg1;

@end