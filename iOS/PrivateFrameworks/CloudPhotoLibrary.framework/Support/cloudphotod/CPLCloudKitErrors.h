//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CPLCloudKitErrors : NSObject
{
}

+ (_Bool)isFeatureDisabledError:(id)arg1;
+ (_Bool)isRecordNotFoundError:(id)arg1;
+ (id)realErrorForError:(id)arg1;
+ (id)errorsPerZoneIDForPartialFailureError:(id)arg1;
+ (id)errorsPerRecordIDForPartialFailureError:(id)arg1;
+ (id)_filteredPartialFailureError:(id)arg1 itemClass:(Class)arg2;
+ (_Bool)isPartialFailureError:(id)arg1;
+ (id)CPLErrorForCloudKitError:(id)arg1 scopeIdentifiers:(id)arg2 withRequestUUIDs:(id)arg3 description:(id)arg4 arguments:(struct __va_list_tag [1])arg5;
+ (id)CPLErrorForCloudKitError:(id)arg1 scopeIdentifiers:(id)arg2 withRequestUUIDs:(id)arg3 description:(id)arg4;
+ (id)CPLErrorForCloudKitError:(id)arg1 withRequestUUIDs:(id)arg2 description:(id)arg3 arguments:(struct __va_list_tag [1])arg4;
+ (id)CPLErrorForCloudKitError:(id)arg1 withRequestUUIDs:(id)arg2 description:(id)arg3;
+ (id)bestErrorForUnderlyingError:(id)arg1;
+ (id)_bestErrorForUnderlyingError:(id)arg1 scopeIdentifiers:(id)arg2;
+ (id)_rejectionReasonFromPartialError:(id)arg1 identifier:(id)arg2;
+ (id)_betterErrorForRecordId:(id)arg1 recordError:(id)arg2;
+ (_Bool)_isCKErrorForRejectedRecord:(id)arg1;

@end

