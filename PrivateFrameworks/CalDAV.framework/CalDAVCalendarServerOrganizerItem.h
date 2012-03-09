/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class CoreDAVLeafItem, CoreDAVHrefItem;

@interface CalDAVCalendarServerOrganizerItem : CoreDAVItem  {
    CoreDAVHrefItem *_href;
    CoreDAVLeafItem *_commonName;
}

@property(retain) CoreDAVLeafItem * commonName;
@property(retain) CoreDAVHrefItem * href;


- (id)description;
- (id)init;
- (void)dealloc;
- (id)copyParseRules;
- (id)initWithNameSpace:(id)arg1 andName:(id)arg2;
- (void)setHref:(id)arg1;
- (id)href;
- (void)setCommonName:(id)arg1;
- (id)commonName;

@end