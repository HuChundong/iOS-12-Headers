//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryServices/NSObject-Protocol.h>
#import <PhotoLibraryServices/PFPhotosFaceRepresentation-Protocol.h>
#import <PhotoLibraryServices/PLSyncableObject-Protocol.h>

@class NSDate, NSSet, NSString;
@protocol PLSyncablePerson;

@protocol PLSyncableDetectedFace <NSObject, PFPhotosFaceRepresentation, PLSyncableObject>
@property(nonatomic) short cloudLocalState;
@property(nonatomic) int trainingType;
@property(nonatomic) int cloudNameSource;
@property(nonatomic) int nameSource;
@property(nonatomic) _Bool hidden;
@property(nonatomic) _Bool manual;
@property(readonly, nonatomic) _Bool isTrainingFace;
@property(nonatomic) long long sourceHeight;
@property(nonatomic) long long sourceWidth;
@property(retain, nonatomic) id <PLSyncablePerson> personBeingKeyFace;
@property(retain, nonatomic) NSSet *rejectedPersons;
@property(retain, nonatomic) id <PLSyncablePerson> person;
@property(copy, nonatomic) NSDate *adjustmentVersion;
@property(nonatomic) int faceAlgorithmVersion;
@property(nonatomic) double size;
@property(nonatomic) double centerY;
@property(nonatomic) double centerX;
- (NSString *)syncDescription;
- (NSString *)pointerDescription;
@end

