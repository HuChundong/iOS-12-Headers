//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IMChat, NSArray, NSSet;
@protocol CKAttachmentCollectionManagerDelegate;

@interface CKAttachmentCollectionManager : NSObject
{
    id <CKAttachmentCollectionManagerDelegate> _delegate;
    NSArray *_photosVideosItems;
    NSArray *_webLinksItems;
    NSArray *_otherContentsItems;
    IMChat *_chat;
    NSSet *_photoTransferGUIDs;
}

@property(retain, nonatomic) NSSet *photoTransferGUIDs; // @synthesize photoTransferGUIDs=_photoTransferGUIDs;
@property(retain, nonatomic) IMChat *chat; // @synthesize chat=_chat;
@property(retain, nonatomic) NSArray *otherContentsItems; // @synthesize otherContentsItems=_otherContentsItems;
@property(retain, nonatomic) NSArray *webLinksItems; // @synthesize webLinksItems=_webLinksItems;
@property(retain, nonatomic) NSArray *photosVideosItems; // @synthesize photosVideosItems=_photosVideosItems;
@property(nonatomic) __weak id <CKAttachmentCollectionManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)deleteAttachmentItems:(id)arg1;
- (void)updateCollections;
- (id)guidFromChatItem:(id)arg1;
- (void)chatItemsChanged:(id)arg1;
- (void)dealloc;
- (id)initWithChat:(id)arg1;
- (id)initWithChat:(id)arg1 photoTransferGUIDs:(id)arg2;

@end

