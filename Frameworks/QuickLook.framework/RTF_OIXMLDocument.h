/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class NSString, RTF_OIXMLElement;

@interface RTF_OIXMLDocument : RTF_OIXMLNode  {
    RTF_OIXMLElement *_rootElement;
    NSString *_version;
    NSString *_encoding;
}


- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)setVersion:(id)arg1;
- (id)initWithRootElement:(id)arg1;
- (id)rootElement;
- (void)setCharacterEncoding:(id)arg1;
- (id)openingTagString;
- (id)contentString;
- (id)closingTagString;
- (void)setRootElement:(id)arg1;
- (id)XMLString;
- (id)copyMutableXMLString;

@end