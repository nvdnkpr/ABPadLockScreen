//
//  ABPadLockScreen.h
//
//  Version 1.2
//
//  Created by Aron Bury on 09/09/2011.
//  Copyright 2011 Aron Bury. All rights reserved.
//
//  Get the latest version of ABLockScreen from this location:
//  https://github.com/abury/ABPadLockScreen
//
//  This software is provided 'as-is', without any express or implied
//  warranty.  In no event will the authors be held liable for any damages
//  arising from the use of this software.
//
//  Permission is granted to anyone to use this software for any purpose,
//  including commercial applications, and to alter it and redistribute it
//  freely, subject to the following restrictions:
//
//  1. The origin of this software must not be misrepresented; you must not
//  claim that you wrote the original software. If you use this software
//  in a product, an acknowledgment in the product documentation would be
//  appreciated but is not required.
//
//  2. Altered source versions must be plainly marked as such, and must not be
//  misrepresented as being the original software.
//
//  3. This notice may not be removed or altered from any source distribution.
//

#import <UIKit/UIKit.h>
@protocol ABPadLockScreenDelegate <NSObject>
@required
- (void) digitInputed:(int)diggit;
- (void) backspaceInputed;
- (void) xSignInputed;
- (void) sign978Inputed;
- (void) abPadLockScreenSearchButtonPressed;
@end

@interface ABPadLockScreen : UIViewController {
    UIButton *_specialButton;
}
@property (nonatomic, weak) id<ABPadLockScreenDelegate> delegate;

- (id)initWithDelegate:(id<ABPadLockScreenDelegate>)aDelegate;
- (void) setSpecialButtonTitle:(NSString *)text;


@end
