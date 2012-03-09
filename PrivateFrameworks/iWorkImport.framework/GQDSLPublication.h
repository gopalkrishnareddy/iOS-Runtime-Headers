/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class GQDSLPageMargins, GQDSStylesheet;

@interface GQDSLPublication : GQDRoot  {
    struct CGSize { 
        float width; 
        float height; 
    } mPageSize;
    GQDSLPageMargins *mPageMargins;
    GQDSStylesheet *mStylesheet;
    BOOL mHasBody;
    BOOL mIsOldAssetNameMapInitialized;
    struct __CFDictionary { } *mOldAssetNameMap;
    BOOL mIsOldTemplateNameMapInitialized;
    struct __CFDictionary { } *mOldTemplateNameMap;
    BOOL mShowOutliner;
    BOOL mHasHeaders;
    BOOL mHasFooters;
}

+ (struct _xmlNs { struct _xmlNs {} *x1; int x2; char *x3; char *x4; void *x5; struct _xmlDoc {} *x6; }*)appNamespace;

- (id)init;
- (void)dealloc;
- (id)stylesheet;
- (struct CGSize { float x1; float x2; })pageSize;
- (void)setStylesheet:(id)arg1;
- (id)pageMargins;
- (BOOL)hasBody;
- (BOOL)showOutliner;
- (BOOL)hasHeaders;
- (BOOL)hasFooters;
- (void)setPageMargins:(id)arg1;
- (struct __CFString { }*)createFixedPathForOldAppBundleResourcePath:(struct __CFString { }*)arg1;
- (struct __CFArray { }*)createUpgradedPathComponentsFromOldTemplatePathComponents:(struct __CFArray { }*)arg1;
- (struct __CFString { }*)createUpgradedPathForOldAssetPath:(struct __CFString { }*)arg1;
- (struct __CFURL { }*)createUrlToAppBundleResource:(struct __CFString { }*)arg1 processorBundle:(struct __CFBundle { }*)arg2;
- (void)initializeAppBundleResourcesUrl;
- (int)readAttributesFromReader:(struct _xmlTextReader { }*)arg1;

@end