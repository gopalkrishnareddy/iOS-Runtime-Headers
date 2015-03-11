/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <BRNotificationReceiverDelegate>, BRNotificationQueue, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString;

@interface BRNotificationReceiver : NSObject <BRItemNotificationReceiving> {
    unsigned int _batchingChanges;
    double _batchingDelay;
    <BRNotificationReceiverDelegate> *_delegate;
    int _gatherDones;
    NSObject<OS_dispatch_queue> *_invalidationQueue;
    NSObject<OS_dispatch_queue> *_ipcQueue;
    BOOL _isNetworkReachable;
    NSMutableDictionary *_itemInTransferByID;
    unsigned long long _lastBatchTime;
    int _networkReachabilityToken;
    BRNotificationQueue *_notifs;
    NSMutableDictionary *_progressObserverByID;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned int _receivedChanges;
    NSMutableArray *_senders;
    NSObject<OS_dispatch_source> *_source;
    NSObject<OS_dispatch_source> *_timer;
    /* Warning: Unrecognized filer type: 'A' using 'void*' */ void*_suspendCount;
}

@property unsigned int batchingChanges;
@property double batchingDelay;
@property(copy,readonly) NSString * debugDescription;
@property(retain) <BRNotificationReceiverDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) unsigned int pendingCount;
@property(readonly) Class superclass;

- (id)_getSender;
- (void)_receiveUpdates:(id)arg1;
- (void)_signalSourceIfNeeded;
- (unsigned int)batchingChanges;
- (double)batchingDelay;
- (void)dealloc;
- (id)delegate;
- (void)dequeue:(unsigned int)arg1 block:(id)arg2;
- (void)disableUpdatesFromIPCBeforeStitching;
- (void)enableUpdatesFromIPCAfterStitching;
- (void)finalize;
- (void)flush;
- (id)init;
- (oneway void)invalidate;
- (oneway void)invalidateAndDontNotifyDelegate;
- (void)invalidateAndNotify:(BOOL)arg1;
- (void)networkDidChangeReachabilityStatusTo:(BOOL)arg1;
- (unsigned int)pendingCount;
- (void)receiveStitchingUpdates:(id)arg1;
- (void)receiveUpdates:(id)arg1 logicalExtensions:(id)arg2 physicalExtensions:(id)arg3 reply:(id)arg4;
- (void)resume;
- (void)setBatchingChanges:(unsigned int)arg1;
- (void)setBatchingDelay:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)suspend;
- (BOOL)watchUbiquitousScopes:(id)arg1 bundleID:(id)arg2 predicate:(id)arg3;

@end