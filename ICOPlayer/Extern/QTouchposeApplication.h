

// Copyright 2012 Todd Reed
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/**********************************
 * MM - 12.01.2015
 * This is a 3rd party library which
 * requires evaluation and appoval
 ***********************************/

/* Othon - this library is for debug mode only
 *
 * It draws the touch points when performing touch gestures,
 * with this we can screencast via webex or create videos to show how the App navigation works
 *
 */


#import <UIKit/UIKit.h>

@interface QTouchposeApplication : UIApplication

@property (nonatomic) BOOL showTouches;
@property (nonatomic) BOOL alwaysShowTouches;
@property (nonatomic) BOOL showTouchesWhenKeyboardShown;
@property (nonatomic) CGFloat touchEndAnimationDuration;
@property (nonatomic) CATransform3D touchEndTransform;
@property (nonatomic, strong) UIColor *touchColor;

@property (nonatomic) UIImage *customTouchImage;
@property (nonatomic) CGPoint customTouchPoint;

@end
