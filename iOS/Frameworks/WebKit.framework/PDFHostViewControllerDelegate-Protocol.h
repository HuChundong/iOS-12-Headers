//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebKit/NSObject-Protocol.h>

@class NSString, NSURL, PDFHostViewController;

@protocol PDFHostViewControllerDelegate <NSObject>

@optional
- (void)pdfHostViewControllerExtensionProcessDidCrash:(PDFHostViewController *)arg1;
- (void)pdfHostViewController:(PDFHostViewController *)arg1 didLongPressPageIndex:(long long)arg2 atLocation:(struct CGPoint)arg3;
- (void)pdfHostViewController:(PDFHostViewController *)arg1 didLongPressURL:(NSURL *)arg2 atLocation:(struct CGPoint)arg3;
- (void)pdfHostViewController:(PDFHostViewController *)arg1 didLongPressPageIndex:(long long)arg2 atLocation:(struct CGPoint)arg3 withAnnotationRect:(struct CGRect)arg4;
- (void)pdfHostViewController:(PDFHostViewController *)arg1 didLongPressURL:(NSURL *)arg2 atLocation:(struct CGPoint)arg3 withAnnotationRect:(struct CGRect)arg4;
- (void)pdfHostViewController:(PDFHostViewController *)arg1 goToPageIndex:(long long)arg2 withViewFrustum:(struct CGRect)arg3;
- (void)pdfHostViewController:(PDFHostViewController *)arg1 goToPageIndex:(long long)arg2;
- (void)pdfHostViewController:(PDFHostViewController *)arg1 goToURL:(NSURL *)arg2 atLocation:(struct CGPoint)arg3;
- (void)pdfHostViewController:(PDFHostViewController *)arg1 goToURL:(NSURL *)arg2;
- (void)pdfHostViewController:(PDFHostViewController *)arg1 findStringUpdate:(unsigned long long)arg2 done:(_Bool)arg3;
- (void)pdfHostViewController:(PDFHostViewController *)arg1 documentDidUnlockWithPassword:(NSString *)arg2;
- (void)pdfHostViewController:(PDFHostViewController *)arg1 updatePageCount:(long long)arg2;
- (void)pdfHostViewController:(PDFHostViewController *)arg1 updateCurrentPageIndex:(long long)arg2;
@end
