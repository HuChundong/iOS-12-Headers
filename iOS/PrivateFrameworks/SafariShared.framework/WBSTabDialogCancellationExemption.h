//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WBSTabDialogCancellationExemption : NSObject
{
    CDUnknownBlockType _cancellationExemptionHandler;
}

+ (id)sameOriginNavigationExemption:(id)arg1;
+ (id)committedNavigationExemption;
+ (id)provisionalNavigationExemption;
- (void).cxx_destruct;
- (_Bool)isExemptFromCancellationInContext:(id)arg1;
- (id)initWithCancellationHandler:(CDUnknownBlockType)arg1;
- (id)init;

@end
