/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSString, NSArray;

@interface NSRelationshipStoreMapping : NSPropertyStoreMapping  {
    NSString *_destinationEntityExternalName;
    NSArray *_foreignKeys;
    NSArray *_joins;
    unsigned int _joinSemantic;
}


- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (void)setJoinSemantic:(unsigned int)arg1;
- (void)setDestinationEntityExternalName:(id)arg1;
- (void)setForeignKeys:(id)arg1;
- (void)setJoins:(id)arg1;
- (id)destinationEntityExternalName;
- (id)foreignKeys;
- (id)joins;
- (unsigned int)joinSemantic;
- (id)columnDefinitions;
- (id)constraintDefinitions;
- (id)relationship;

@end