/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class LBSGLocRequest;

@interface LBSWrapperRequest : PBRequest  {
    BOOL _hasRequestType;
    int _requestType;
    LBSGLocRequest *_request;
}

@property BOOL hasRequestType;
@property int requestType;
@property(readonly) BOOL hasRequest;
@property(retain) LBSGLocRequest * request;


- (id)description;
- (void)dealloc;
- (Class)responseClass;
- (void)setRequest:(id)arg1;
- (id)dictionaryRepresentation;
- (id)request;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (int)requestType;
- (BOOL)hasRequest;
- (void)setHasRequestType:(BOOL)arg1;
- (BOOL)hasRequestType;
- (void)setRequestType:(int)arg1;

@end