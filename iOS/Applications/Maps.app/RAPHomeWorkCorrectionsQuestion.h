//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RAPQuestion.h"

#import "RAPMenuItem-Protocol.h"

@class GEOMapItemCorrectedLocationAttributes, MKMapItem, NSMutableArray, NSString, NSUUID, PlaceCardItem, RAPHomeWorkAddressCorrections, UIImage;
@protocol MKMapServiceTicket;

__attribute__((visibility("hidden")))
@interface RAPHomeWorkCorrectionsQuestion : RAPQuestion <RAPMenuItem>
{
    NSMutableArray *_userPaths;
    _Bool _hasSubmittedRAP;
    int _addressSourceType;
    GEOMapItemCorrectedLocationAttributes *_correctedLocationAttributes;
    long long _addressType;
    PlaceCardItem *_placeCardItem;
    NSString *_customLabel;
    RAPHomeWorkAddressCorrections *_correctedAddress;
    id <MKMapServiceTicket> _forwardGeoServiceTicket;
    MKMapItem *_updatedMapItem;
    NSString *_searchText;
    NSString *_autocompleteSearchText;
    NSUUID *_routineIdentifier;
    struct CLLocationCoordinate2D _correctedCoordinate;
}

@property(retain, nonatomic) NSUUID *routineIdentifier; // @synthesize routineIdentifier=_routineIdentifier;
@property(nonatomic) struct CLLocationCoordinate2D correctedCoordinate; // @synthesize correctedCoordinate=_correctedCoordinate;
@property(copy, nonatomic) NSString *autocompleteSearchText; // @synthesize autocompleteSearchText=_autocompleteSearchText;
@property(copy, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
@property(retain, nonatomic) MKMapItem *updatedMapItem; // @synthesize updatedMapItem=_updatedMapItem;
@property(nonatomic) int addressSourceType; // @synthesize addressSourceType=_addressSourceType;
@property(retain, nonatomic) id <MKMapServiceTicket> forwardGeoServiceTicket; // @synthesize forwardGeoServiceTicket=_forwardGeoServiceTicket;
@property(retain, nonatomic) RAPHomeWorkAddressCorrections *correctedAddress; // @synthesize correctedAddress=_correctedAddress;
@property(copy, nonatomic) NSString *customLabel; // @synthesize customLabel=_customLabel;
@property(readonly, nonatomic) PlaceCardItem *placeCardItem; // @synthesize placeCardItem=_placeCardItem;
@property(nonatomic) long long addressType; // @synthesize addressType=_addressType;
@property(nonatomic) _Bool hasSubmittedRAP; // @synthesize hasSubmittedRAP=_hasSubmittedRAP;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long questionCategory;
@property(readonly, nonatomic) int userAction;
- (void)addUserPathItem:(int)arg1;
- (_Bool)shouldShowHomeWorkRAPConsentScreen;
- (_Bool)isComplete;
- (_Bool)shouldPromptForRAP;
- (void)submitProblemReportAndPersistCorrections:(CDUnknownBlockType)arg1;
- (void)rapCompleted:(_Bool)arg1 privacyShown:(_Bool)arg2 analyticsEvent:(id)arg3;
- (void)updateCoreRoutineWithCorrectedMapItem:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)processAndPersistCorrections;
@property(readonly, nonatomic) GEOMapItemCorrectedLocationAttributes *correctedLocationAttributes; // @synthesize correctedLocationAttributes=_correctedLocationAttributes;
- (_Bool)hasCorrections;
- (_Bool)isAdjustedCoordinateBeyondThreshold;
- (void)_fillSubmittableProblem:(id)arg1;
- (void)_updateRoutineIdentifier;
- (void)findCoreRoutineIdentifierForMapItem:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)multilineAddress;
- (struct CLLocationCoordinate2D)originalCoordinate;
- (struct CLLocationCoordinate2D)currentCoordinate;
- (void)clearCorrections;
- (void)clearCorrectedCoordinate;
- (id)initWithReport:(id)arg1 parentQuestion:(id)arg2 addressType:(long long)arg3 placeCardItem:(id)arg4;
- (id)initWithReport:(id)arg1 parentQuestion:(id)arg2 addressType:(long long)arg3;
- (id)initWithReport:(id)arg1 parentQuestion:(id)arg2 placeCardItem:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) UIImage *image;
@property(readonly, nonatomic) NSString *localizedDescription;
@property(readonly, nonatomic) NSString *localizedTitle;
@property(readonly) Class superclass;

@end

