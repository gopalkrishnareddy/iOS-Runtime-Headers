/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface NSClassicHashTable : NSHashTable  {
    struct { 
        int (*hash)(); 
        int (*isEqual)(); 
        int (*retain)(); 
        int (*release)(); 
        int (*describe)(); 
    } _callBacks;
    struct __CFBasicHash { } *_ht;
}


- (void)insertItem:(const void*)arg1;
- (void)getKeys:(const void**)arg1 count:(unsigned int*)arg2;
- (void)insertKnownAbsentItem:(const void*)arg1;
- (void)removeAllItems;
- (void)removeItem:(const void*)arg1;
- (void*)getItem:(const void*)arg1;
- (unsigned int)count;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (id)copy;
- (void)addObject:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)allObjects;

@end