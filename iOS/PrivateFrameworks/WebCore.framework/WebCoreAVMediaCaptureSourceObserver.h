//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebCore/AVCaptureAudioDataOutputSampleBufferDelegate-Protocol.h>
#import <WebCore/AVCaptureVideoDataOutputSampleBufferDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WebCoreAVMediaCaptureSourceObserver : NSObject <AVCaptureAudioDataOutputSampleBufferDelegate, AVCaptureVideoDataOutputSampleBufferDelegate>
{
    // Error parsing type: ^{AVMediaCaptureSource=^^?{atomic<unsigned int>=AI}{WeakPtrFactory<WebCore::RealtimeMediaSource>={RefPtr<WTF::WeakReference<WebCore::RealtimeMediaSource>, WTF::DumbPtrTraits<WTF::WeakReference<WebCore::RealtimeMediaSource> > >=^{WeakReference<WebCore::RealtimeMediaSource>}}}B{String={RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> >=^{StringImpl}}}{String={RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> >=^{StringImpl}}}i{String={RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> >=^{StringImpl}}}{Vector<std::__1::reference_wrapper<WebCore::RealtimeMediaSource::Observer>, 0, WTF::CrashOnOverflow, 16>=^{reference_wrapper<WebCore::RealtimeMediaSource::Observer>}II}{IntSize=ii}ddddddiBBBBB{RealtimeMediaSourceSettings=IIffidIIB{AtomicString={String={RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> >=^{StringImpl}}}}{AtomicString={String={RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> >=^{StringImpl}}}}{AtomicString={String={RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> >=^{StringImpl}}}}iB{RealtimeMediaSourceSupportedConstraints=BBBBBBBBBBBBB}}{RealtimeMediaSourceSupportedConstraints=BBBBBBBBBBBBB}{RetainPtr<WebCoreAVMediaCaptureSourceObserver>=^v}{unique_ptr<WebCore::RealtimeMediaSourceCapabilities, std::__1::default_delete<WebCore::RealtimeMediaSourceCapabilities> >={__compressed_pair<WebCore::RealtimeMediaSourceCapabilities *, std::__1::default_delete<WebCore::RealtimeMediaSourceCapabilities> >=^{RealtimeMediaSourceCapabilities}}}{RetainPtr<AVCaptureSession>=^v}{RetainPtr<AVCaptureDevice>=^v}iB}, name: m_callback
}

- (void)endSessionInterrupted:(id)arg1;
- (void)beginSessionInterrupted:(id)arg1;
- (void)sessionRuntimeError:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)captureOutput:(struct AVCaptureOutput *)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(struct AVCaptureConnection *)arg3;
- (void)removeNotificationObservers;
- (void)addNotificationObservers;
- (void)disconnect;
-     // Error parsing type: @24@0:8^{AVMediaCaptureSource=^^?{atomic<unsigned int>=AI}{WeakPtrFactory<WebCore::RealtimeMediaSource>={RefPtr<WTF::WeakReference<WebCore::RealtimeMediaSource>, WTF::DumbPtrTraits<WTF::WeakReference<WebCore::RealtimeMediaSource> > >=^{WeakReference<WebCore::RealtimeMediaSource>}}}B{String={RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> >=^{StringImpl}}}{String={RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> >=^{StringImpl}}}i{String={RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> >=^{StringImpl}}}{Vector<std::__1::reference_wrapper<WebCore::RealtimeMediaSource::Observer>, 0, WTF::CrashOnOverflow, 16>=^{reference_wrapper<WebCore::RealtimeMediaSource::Observer>}II}{IntSize=ii}ddddddiBBBBB{RealtimeMediaSourceSettings=IIffidIIB{AtomicString={String={RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> >=^{StringImpl}}}}{AtomicString={String={RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> >=^{StringImpl}}}}{AtomicString={String={RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> >=^{StringImpl}}}}iB{RealtimeMediaSourceSupportedConstraints=BBBBBBBBBBBBB}}{RealtimeMediaSourceSupportedConstraints=BBBBBBBBBBBBB}{RetainPtr<WebCoreAVMediaCaptureSourceObserver>=^v}{unique_ptr<WebCore::RealtimeMediaSourceCapabilities, std::__1::default_delete<WebCore::RealtimeMediaSourceCapabilities> >={__compressed_pair<WebCore::RealtimeMediaSourceCapabilities *, std::__1::default_delete<WebCore::RealtimeMediaSourceCapabilities> >=^{RealtimeMediaSourceCapabilities}}}{RetainPtr<AVCaptureSession>=^v}{RetainPtr<AVCaptureDevice>=^v}iB}16, name: initWithCallback:

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

