/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class NSMutableArray;

@interface GMMIncomingTile : PBCodable  {
    int _zoom;
    int _numHorizontalTiles;
    int _numVerticalTiles;
    NSMutableArray *_tiles;
}

@property int zoom;
@property int numHorizontalTiles;
@property int numVerticalTiles;
@property(retain) NSMutableArray * tiles;


- (id)description;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (void)setZoom:(int)arg1;
- (int)zoom;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)tiles;
- (int)numVerticalTiles;
- (int)numHorizontalTiles;
- (id)tileAtIndex:(unsigned int)arg1;
- (unsigned int)tilesCount;
- (void)addTile:(id)arg1;
- (void)setNumVerticalTiles:(int)arg1;
- (void)setNumHorizontalTiles:(int)arg1;
- (void)setTiles:(id)arg1;

@end