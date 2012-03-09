/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class NSString;

@interface LBSGUserProfile : PBCodable  {
    NSString *_userName;
    NSString *_authToken;
}

@property(readonly) BOOL hasUserName;
@property(retain) NSString * userName;
@property(readonly) BOOL hasAuthToken;
@property(retain) NSString * authToken;


- (id)description;
- (void)dealloc;
- (void)setUserName:(id)arg1;
- (void)setAuthToken:(id)arg1;
- (id)authToken;
- (id)userName;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)hasAuthToken;
- (BOOL)hasUserName;

@end