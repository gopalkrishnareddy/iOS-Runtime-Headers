/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSMutableDictionary, MimePart, MimeBody, NSData, MFLock, NSURL;

@interface WebMessageDocument : MFWebAttachmentSource  {
    unsigned int _uniqueId;
    NSURL *_baseURL;
    MimeBody *_mimeBody;
    MimePart *_htmlPart;
    NSData *_htmlData;
    MFLock *_lock;
    NSMutableDictionary *_partsByURL;
    NSMutableDictionary *_partsByFilename;
    unsigned int _preferredEncoding;
}

@property unsigned int preferredEncoding;
@property(readonly) NSData * htmlData;
@property(readonly) MimePart * mimePart;
@property(readonly) MimeBody * mimeBody;
@property(readonly) NSURL * baseURL;

+ (id)sourceForURL:(id)arg1;

- (id)initWithMimeBody:(id)arg1;
- (id)initWithMimePart:(id)arg1 htmlData:(id)arg2 encoding:(unsigned long)arg3;
- (id)attachmentsInDocument;
- (id)fileWrapper;
- (id)initWithMimePart:(id)arg1;
- (id)_initWithMimePart:(id)arg1 htmlData:(id)arg2;
- (id)mimePartForURL:(id)arg1;
- (id)htmlData;
- (id)attachmentForURL:(id)arg1;
- (id)preferredCharacterSet;
- (id)mimePart;
- (id)mimeBody;
- (unsigned long)preferredEncoding;
- (void)setPreferredEncoding:(unsigned long)arg1;
- (id)init;
- (void)dealloc;
- (id)baseURL;

@end