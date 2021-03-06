//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SVSStarkItemController-Protocol.h"

@class NSString, NSUUID, SVSStarkUnavailableSnippetView;
@protocol SVSStarkItemControllerDelegate;

@interface SVSStarkUnavailableViewController : UIViewController <SVSStarkItemController>
{
    SVSStarkUnavailableSnippetView *_snippetView;
    _Bool _shouldSynthesizeTitles;
    _Bool _dismissAssistantAfterSpeaking;
    id <SVSStarkItemControllerDelegate> _delegate;
    NSString *_titleString;
    NSString *_subtitle;
    long long _interactionStyle;
    NSUUID *_conversationItemIdentifier;
}

@property(nonatomic) _Bool dismissAssistantAfterSpeaking; // @synthesize dismissAssistantAfterSpeaking=_dismissAssistantAfterSpeaking;
@property(nonatomic) _Bool shouldSynthesizeTitles; // @synthesize shouldSynthesizeTitles=_shouldSynthesizeTitles;
@property(copy, nonatomic) NSUUID *conversationItemIdentifier; // @synthesize conversationItemIdentifier=_conversationItemIdentifier;
@property(nonatomic) long long interactionStyle; // @synthesize interactionStyle=_interactionStyle;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *titleString; // @synthesize titleString=_titleString;
@property(nonatomic) __weak id <SVSStarkItemControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)isActive;
- (void)viewDidLoad;
- (void)loadView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

