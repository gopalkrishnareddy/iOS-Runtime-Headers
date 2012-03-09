/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSString, NSLock;

@interface ISClient : NSObject  {
    NSString *_appleClientApplication;
    NSString *_appleClientVersions;
    NSString *_identifier;
    NSLock *_lock;
    NSString *_partnerHeader;
    NSString *_userAgent;
}

@property(copy) NSString * appleClientApplication;
@property(copy) NSString * userAgent;
@property(readonly) NSString * appleClientVersions;
@property(copy) NSString * identifier;
@property(copy) NSString * partnerHeader;

+ (id)currentClient;

- (id)init;
- (void)dealloc;
- (id)localStoreFrontID;
- (void)_softwareMapInvalidatedNotification:(id)arg1;
- (void)setPartnerHeader:(id)arg1;
- (id)appleClientVersions;
- (id)userAgent;
- (id)identifier;
- (void)setIdentifier:(id)arg1;
- (void)setUserAgent:(id)arg1;
- (id)appleClientApplication;
- (void)setAppleClientApplication:(id)arg1;
- (id)partnerHeader;

@end