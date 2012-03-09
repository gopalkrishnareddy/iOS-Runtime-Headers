/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class TSUPointerKeyDictionary;

@interface EDKeyedCollection : EDCollection  {
    TSUPointerKeyDictionary *mMap;
}


- (unsigned int)addObject:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)replaceObjectAtIndex:(unsigned int)arg1 withObject:(id)arg2;
- (void)insertObject:(id)arg1 atIndex:(unsigned int)arg2;
- (void)removeObjectAtIndex:(unsigned int)arg1;
- (void)removeAllObjects;
- (bool)isObjectInMap:(id)arg1;
- (void)insertIntoMap:(id)arg1;
- (void)removeFromMap:(id)arg1;
- (bool)isOverwritingKeyOK;
- (id)objectWithKey:(int)arg1;

@end