//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TSActivityErrorHandlerType-Protocol.h"

@class UIViewController;

@interface FRActivityErrorHandler : NSObject <TSActivityErrorHandlerType>
{
    UIViewController *viewController;
}

@property(retain, nonatomic) UIViewController *viewController; // @synthesize viewController;
- (void).cxx_destruct;
- (void)failedToFetchHeadlineWithID:(id)arg1 error:(id)arg2;
- (void)failedToFetchTagWithID:(id)arg1 error:(id)arg2;
- (void)presentAlertControllerWithStatus:(unsigned long long)arg1;

@end
