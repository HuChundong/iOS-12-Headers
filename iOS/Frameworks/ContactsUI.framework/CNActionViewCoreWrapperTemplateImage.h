//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUI/CNActionViewTemplateImage-Protocol.h>

@class NSString;
@protocol CNUIUserActionTemplateImage;

__attribute__((visibility("hidden")))
@interface CNActionViewCoreWrapperTemplateImage : NSObject <CNActionViewTemplateImage>
{
    id <CNUIUserActionTemplateImage> _coreTemplateImage;
}

@property(readonly, nonatomic) id <CNUIUserActionTemplateImage> coreTemplateImage; // @synthesize coreTemplateImage=_coreTemplateImage;
- (void).cxx_destruct;
- (id)templateImage;
- (id)imageWithColor:(id)arg1;
- (id)initWithCoreTemplateImage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
