/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class <MFMessageComposeViewControllerDelegate>, NSString, NSArray;

@interface MFMessageComposeViewController : UINavigationController  {
    <MFMessageComposeViewControllerDelegate> *_messageComposeDelegate;
    NSArray *_recipients;
    NSString *_body;
}

@property(copy) NSString * body;
@property(copy) NSArray * recipients;
@property <MFMessageComposeViewControllerDelegate> * messageComposeDelegate;

+ (void)_startListeningForAvailabilityNotifications;
+ (void)_setupAccountMonitor;
+ (BOOL)_canSendText;
+ (void)_updateServiceAvailability;
+ (void)_serviceAvailabilityChanged:(id)arg1;
+ (void)initialize;
+ (BOOL)canSendText;

- (id)recipients;
- (void)setRecipients:(id)arg1;
- (void)smsComposeControllerCancelled:(id)arg1;
- (void)smsComposeControllerSendStarted:(id)arg1;
- (id)messageComposeDelegate;
- (id)body;
- (void)setModalPresentationStyle:(int)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)setBody:(id)arg1;
- (void)setMessageComposeDelegate:(id)arg1;

@end