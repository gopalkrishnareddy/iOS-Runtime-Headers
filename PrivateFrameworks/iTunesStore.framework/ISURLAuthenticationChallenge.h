/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSURLAuthenticationChallenge;

@interface ISURLAuthenticationChallenge : ISAuthenticationChallenge  {
    NSURLAuthenticationChallenge *_challenge;
}


- (BOOL)hasPassword;
- (void)dealloc;
- (int)failureCount;
- (void)useCredential:(id)arg1;
- (id)initWithAuthenticationChallenge:(id)arg1;
- (void)cancelAuthentication;
- (id)user;
- (id)password;
- (id)sender;

@end