/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class ISPropertyListProvider, NSDictionary;

@interface ISProcessPropertyListOperation : ISOperation  {
    ISPropertyListProvider *_dataProvider;
    NSDictionary *_propertyList;
}

@property(retain) ISPropertyListProvider * dataProvider;


- (void)dealloc;
- (void)run;
- (id)initWithPropertyList:(id)arg1;
- (id)dataProvider;
- (void)setDataProvider:(id)arg1;

@end