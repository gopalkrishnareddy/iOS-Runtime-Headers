/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSString, NSRLEArray;

@interface NSConcreteAttributedString : NSAttributedString  {
    NSString *string;
    NSRLEArray *attributes;
}


- (id)_runArrayHoldingAttributes;
- (id)initWithString:(id)arg1;
- (id)string;
- (unsigned int)length;
- (id)init;
- (void)dealloc;
- (id)attribute:(id)arg1 atIndex:(unsigned int)arg2 effectiveRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg3;
- (id)initWithAttributedString:(id)arg1;
- (id)initWithString:(id)arg1 attributes:(id)arg2;
- (id)attributesAtIndex:(unsigned int)arg1 effectiveRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg2;
- (void)finalize;

@end