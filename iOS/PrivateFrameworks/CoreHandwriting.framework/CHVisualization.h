//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CHRecognitionSession;
@protocol CHVisualizationDelegate;

@interface CHVisualization : NSObject
{
    CHRecognitionSession *_recognitionSession;
    id <CHVisualizationDelegate> _delegate;
}

@property(nonatomic) id <CHVisualizationDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, retain, nonatomic) CHRecognitionSession *recognitionSession; // @synthesize recognitionSession=_recognitionSession;
- (void)dealloc;
- (id)initWithRecognitionSession:(id)arg1;
- (struct CGColor *)newColorForVisualizedItemAtIndex:(long long)arg1;
- (void)toggleVisualizationRegionAtPoint:(struct CGPoint)arg1;
- (void)drawVisualizationInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2 viewBounds:(struct CGRect)arg3;
- (void)recognitionSessionDidUpdateRecognitionResult;
@property(readonly, nonatomic) _Bool wantsInputDrawings;
@property(readonly, nonatomic) long long layeringPriority;

@end

