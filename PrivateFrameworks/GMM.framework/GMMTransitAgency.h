/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class NSString;

@interface GMMTransitAgency : PBCodable  {
    NSString *_name;
    NSString *_mainUrl;
    NSString *_phone;
}

@property(retain) NSString * name;
@property(readonly) BOOL hasMainUrl;
@property(retain) NSString * mainUrl;
@property(readonly) BOOL hasPhone;
@property(retain) NSString * phone;


- (void)setName:(id)arg1;
- (id)description;
- (id)description;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (id)name;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)hasMainUrl;
- (void)setMainUrl:(id)arg1;
- (BOOL)hasPhone;
- (id)mainUrl;
- (id)phone;
- (void)setPhone:(id)arg1;

@end