/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ApplePushService.framework/ApplePushService
 */

@class <APSConnectionDelegate>, NSArray, NSString, NSLock, NSMutableDictionary;

@interface APSConnection : NSObject  {
    <APSConnectionDelegate> *_delegate;
    NSLock *_lock;
    NSString *_environmentName;
    struct __CFRunLoopSource { } *_runLoopSource;
    NSString *_connectionPortName;
    unsigned int _connectionPort;
    int _serverPID;
    unsigned int _connectionServerPort;
    struct __CFMachPort { } *_connectionSeverCFMachPort;
    NSArray *_enabledTopics;
    NSArray *_ignoredTopics;
    NSMutableDictionary *_subtopics;
    BOOL _enableCriticalReliability;
    BOOL _enableStatusNotifications;
    NSMutableDictionary *_idsToOutgoingMessages;
    unsigned int _nextOutgoingMessageID;
}

@property <APSConnectionDelegate> * delegate;
@property(readonly) int serverPID;

+ (struct __SecIdentity { }*)copyIdentity;
+ (double)keepAliveIntervalForEnvironmentName:(id)arg1;
+ (id)connectionsDebuggingState;

- (unsigned int)messageSize;
- (void)dealloc;
- (void)sendOutgoingMessage:(id)arg1;
- (void)cancelOutgoingMessage:(id)arg1;
- (BOOL)isConnected;
- (void)scheduleInRunLoop:(id)arg1;
- (void)setIgnoredTopics:(id)arg1;
- (void)setSubtopic:(id)arg1 forEnabledTopic:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)hasIdentity;
- (void)sendFakeMessage:(id)arg1;
- (id)initWithEnvironmentName:(id)arg1 namedDelegatePort:(id)arg2;
- (void)_sendEnableStatusNotifications;
- (void)_connectionServerPortInvalidated;
- (void)_sendEnabledTopics;
- (void)_sendIgnoredTopics;
- (void)_sendEnableCriticalReliability;
- (id)_dataForPropertyList:(id)arg1;
- (int)serverPID;
- (void)_deliverPublicToken:(id)arg1;
- (void)_deliverMessageForTopic:(id)arg1 userInfo:(id)arg2;
- (void)_deliverOutgoingMessageResultWithID:(unsigned int)arg1 error:(id)arg2;
- (void)_deliverConnectionStatusChange:(BOOL)arg1;
- (void)_disconnect;
- (id)publicToken;
- (void)setEnabledTopics:(id)arg1;
- (id)initWithEnvironmentName:(id)arg1;
- (void)removeFromRunLoop;
- (void)_connect;
- (void)setEnableCriticalReliability:(BOOL)arg1;

@end