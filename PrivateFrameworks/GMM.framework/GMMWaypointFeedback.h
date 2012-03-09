/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class NSMutableArray, NSString;

@interface GMMWaypointFeedback : PBCodable  {
    int _status;
    NSMutableArray *_waypoints;
    NSString *_streetViewPanoId;
}

@property int status;
@property(retain) NSMutableArray * waypoints;
@property(readonly) BOOL hasStreetViewPanoId;
@property(retain) NSString * streetViewPanoId;


- (id)description;
- (id)description;
- (void)dealloc;
- (void)setStatus:(int)arg1;
- (int)status;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)waypointAtIndex:(unsigned int)arg1;
- (unsigned int)waypointsCount;
- (void)addWaypoint:(id)arg1;
- (void)setWaypoints:(id)arg1;
- (id)streetViewPanoId;
- (BOOL)hasStreetViewPanoId;
- (void)setStreetViewPanoId:(id)arg1;
- (id)waypoints;

@end