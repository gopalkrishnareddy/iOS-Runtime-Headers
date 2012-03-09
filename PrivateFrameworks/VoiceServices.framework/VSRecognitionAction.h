/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, VSRecognitionSession;

@interface VSRecognitionAction : NSObject  {
    NSString *_resultString;
    NSString *_statusString;

  /* Error parsing encoded ivar type info: (?="stringValue"@"NSString""attributedStringValue"@"NSAttributedString") */
    union { 
        NSString *stringValue; 
        id attributedStringValue; 
        /* Warning: Unrecognized filer type: ')' using 'void*' */ void*NSAttributedString; 
    } _spokenString;

    VSRecognitionSession *_session;
    unsigned int _spokenStringIsAttributed : 1;
}


- (id)cancel;
- (id)perform;
- (void)dealloc;
- (id)_session;
- (void)setResultDisplayString:(id)arg1;
- (void)setStatusDisplayString:(id)arg1;
- (void)setSpokenFeedbackString:(id)arg1;
- (void)setSpokenFeedbackAttributedString:(id)arg1;
- (void)completeWithNextAction:(id)arg1 error:(id)arg2;
- (BOOL)sensitiveActionsEnabled;
- (void)_continueAfterDeferredStart;
- (BOOL)_hasDeferredStartCallback;
- (int)completionType;
- (void)_setSession:(id)arg1;
- (id)spokenFeedbackString;
- (id)spokenFeedbackAttributedString;
- (id)resultDisplayString;
- (id)statusDisplayString;

@end