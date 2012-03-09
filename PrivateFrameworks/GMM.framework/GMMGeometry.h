/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class GMMPixelPoint, GMMPolygon, GMMEfficientMapPoint, GMMMapPoint, GMMPolyLine;

@interface GMMGeometry : PBCodable  {
    int _type;
    GMMMapPoint *_mapPoint;
    GMMPolyLine *_polyLine;
    GMMPolygon *_polygon;
    GMMPixelPoint *_pixelPoint;
    GMMEfficientMapPoint *_efficientMapPoint;
}

@property int type;
@property(readonly) BOOL hasMapPoint;
@property(retain) GMMMapPoint * mapPoint;
@property(readonly) BOOL hasPolyLine;
@property(retain) GMMPolyLine * polyLine;
@property(readonly) BOOL hasPolygon;
@property(retain) GMMPolygon * polygon;
@property(readonly) BOOL hasPixelPoint;
@property(retain) GMMPixelPoint * pixelPoint;
@property(readonly) BOOL hasEfficientMapPoint;
@property(retain) GMMEfficientMapPoint * efficientMapPoint;


- (id)description;
- (id)description;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (int)type;
- (void)setType:(int)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)initWithCoordinate:(struct { double x1; double x2; })arg1;
- (void)setEfficientMapPoint:(id)arg1;
- (void)setPolygon:(id)arg1;
- (void)setPolyLine:(id)arg1;
- (void)setMapPoint:(id)arg1;
- (id)pixelPointGeometry;
- (void)setPixelPoint:(id)arg1;
- (id)efficientMapPoint;
- (BOOL)hasEfficientMapPoint;
- (id)pixelPoint;
- (BOOL)hasPixelPoint;
- (id)polygon;
- (BOOL)hasPolygon;
- (id)polyLine;
- (BOOL)hasPolyLine;
- (id)mapPoint;
- (BOOL)hasMapPoint;

@end