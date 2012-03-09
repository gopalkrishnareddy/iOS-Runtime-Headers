/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@class PTPWrappedBytes, PTPOperationResponsePacket;

@interface PTPTransport : NSObject  {
    unsigned short _type;
    int _role;
    int _connectionStatus;
    id _delegate;
    BOOL _timedOut;
    BOOL _responseReceived;
    PTPOperationResponsePacket *_response;
    BOOL _callbackThreadIsRunning;
    struct _opaque_pthread_t { long x1; struct __darwin_pthread_handler_rec {} *x2; BOOL x3[596]; } *_callbackThread;
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    } _callbackThreadMutex;
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    } _callbackThreadRunMutex;
    struct _opaque_pthread_cond_t { 
        long __sig; 
        BOOL __opaque[24]; 
    } _callbackThreadCondition;
    BOOL _callbackThreadConditionSignaled;
    struct __CFRunLoop { } *_callbackThreadRunLoop;
    struct __CFRunLoopSource { } *_callbackDummyMachPortRLSrc;
    unsigned char _headerBuffer[12];
    BOOL _headerBufferFound;
    BOOL _delegateNeedsResponse;
    BOOL _busy;
    unsigned int _canceledTransactionID;
    PTPWrappedBytes *_dataForTransaction;
    unsigned long long _excessReceivedDataSize;
}


- (void)sendData:(id)arg1;
- (id)init;
- (void)dealloc;
- (int)connectionStatus;
- (void)setTimedOut:(BOOL)arg1;
- (BOOL)timedOut;
- (int)role;
- (BOOL)isCallbackThreadRunning;
- (void*)callbackThreadFunction;
- (void)cleanupCallbackThread;
- (BOOL)startCallbackThread;
- (void)endCallbackThread;
- (void)abortPendingIO;
- (unsigned long long)excessReceivedDataSize;
- (id)sendRequest:(id)arg1 sendData:(id)arg2 timeout:(unsigned long)arg3;
- (unsigned short)deviceStatus;
- (void)deviceReset;
- (BOOL)startResponder;
- (BOOL)connected;
- (id)sendRequest:(id)arg1 receiveData:(id)arg2 timeout:(unsigned long)arg3;
- (void)cancelTransaction:(id)arg1;
- (BOOL)startInitiator;
- (int)waitForCallbackThreadConditionSignalWithTimeout:(long)arg1;
- (int)lockCallbackThreadMutex;
- (int)unlockCallbackThreadMutex;
- (void)setResponseReceived:(BOOL)arg1;
- (BOOL)responseReceived;
- (int)signalCallbackThreadCondition;
- (struct __CFRunLoop { }*)callbackThreadRunLoop;
- (void)stop;
- (id)response;
- (unsigned short)type;
- (BOOL)sendEvent:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setResponse:(id)arg1;
- (BOOL)sendResponse:(id)arg1;

@end