/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSPersistentStoreCache : NSObject  {
    id _externalData;
    unsigned int _capacity;
}

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (void)_growRegistrationCollectionTo:(unsigned int)arg1;
- (void)forgetAllExternalData;
- (void)decrementRefCountForObjectID:(id)arg1;
- (void)incrementRefCountForObjectID:(id)arg1;
- (int)refCountForObjectID:(id)arg1;
- (void)registerExternalData:(id)arg1 forObjectID:(id)arg2 options:(unsigned int)arg3;
- (id)externalDataForObjectID:(id)arg1 timestamp:(double)arg2;
- (unsigned int)optionsForObjectID:(id)arg1;
- (void)registerExternalData:(id)arg1 forSourceObjectID:(id)arg2 key:(id)arg3 options:(unsigned int)arg4 andTimestamp:(double)arg5;
- (id)externalDataForSourceObjectID:(id)arg1 key:(id)arg2 timestamp:(double)arg3;
- (void)forgetExternalDataForObjectID:(id)arg1;

@end