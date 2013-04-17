//
//  OBSlider.h
//
//  Created by Ole Begemann on 02.01.11.
//  Copyright 2011 Ole Begemann. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol OBSliderDelegate;

@interface OBSlider : UISlider

@property (nonatomic, weak) id<OBSliderDelegate> delegate;
@property (assign, nonatomic, readonly) float scrubbingSpeed;
@property (strong, nonatomic) NSArray *scrubbingSpeeds;
@property (strong, nonatomic) NSArray *scrubbingSpeedChangePositions;

@end


@protocol OBSliderDelegate <NSObject>

@optional
- (void)slider:(OBSlider *)slider didChangeToSpeed:(CGFloat)speed whileTracking:(BOOL)tracking;
- (void)slider:(OBSlider *)slider didChangeToSpeedIndex:(NSUInteger)index whileTracking:(BOOL)tracking;
- (void)sliderDidReceiveTouchOnTrackOnly:(OBSlider *)slider;

@end
