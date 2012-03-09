/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@interface CTMessageCenter : NSObject  {
}

+ (id)sharedMessageCenter;

- (id)init;
- (struct { int x1; int x2; })send:(id)arg1;
- (void)setDeliveryReportsEnabled:(BOOL)arg1;
- (BOOL)getCharacterCount:(int*)arg1 andMessageSplitThreshold:(int*)arg2 forSmsText:(id)arg3;
- (BOOL)isMmsEnabled;
- (struct { int x1; int x2; })isDeliveryReportsEnabled:(BOOL*)arg1;
- (id)decodeMessage:(id)arg1;
- (id)statusOfOutgoingMessages;
- (id)deferredMessageWithId:(unsigned int)arg1;
- (id)incomingMessageWithId:(unsigned int)arg1;
- (void)acknowledgeOutgoingMessageWithId:(unsigned int)arg1;
- (void)acknowledgeIncomingMessageWithId:(unsigned int)arg1;
- (id)allIncomingMessages;
- (int)incomingMessageCount;
- (BOOL)sendSMSWithText:(id)arg1 serviceCenter:(id)arg2 toAddress:(id)arg3 withMoreToFollow:(BOOL)arg4;
- (BOOL)isMmsConfigured;
- (id)incomingMessageWithId:(unsigned int)arg1 telephonyCenter:(struct __CTTelephonyCenter { }*)arg2 isDeferred:(BOOL)arg3;
- (struct { int x1; int x2; })sendMMS:(id)arg1;
- (struct { int x1; int x2; })sendSMS:(id)arg1 withMoreToFollow:(BOOL)arg2;
- (struct { int x1; int x2; })send:(id)arg1 withMoreToFollow:(BOOL)arg2;
- (struct { int x1; int x2; })sendMMSFromData:(id)arg1 messageId:(unsigned int)arg2;
- (void)sendMessageAsSmsToShortCodeRecipients:(id)arg1 andReplaceData:(id*)arg2;
- (id)encodeMessage:(id)arg1;
- (BOOL)sendSMSWithText:(id)arg1 serviceCenter:(id)arg2 toAddress:(id)arg3;

@end