
Playsation2 controller interface library for Arduino.

(Japanese document revised Oct. 25, 2008)


C/C++���������̎��݂ɂ��A�A�h�o�C�X���t�B�[�h�o�b�N���}�v���܂��B
gyokimae at �z�b�g���[���E�h�b�g�R���܂ŁB


*********
* �ڎ�  *
*********

1. ���C�u�����̃C���X�g�[��

2. �n�[�h�E�F�A�̃s���z�u

3. �֐����t�@�����X

4. ���쒆�Ƀn�}�����ӏ�

5. ���̑�



==============================================================================
1. ���C�u�����̃C���X�g�[��
==============================================================================

Like any other Arduino library, place the files under
<arduino path>/hardware/libraries/
and restart the Arduino IDE.



==============================================================================
2. �n�[�h�E�F�A�̃s���z�u
==============================================================================

PS2�R���g���[���̃s���z�u�́A�e��T�C�g�ŎQ�Ƃł��܂��B
��H�}shcematic.bmp��Y�t���܂����A�R���g���[�����̂ǂ̐����ǂ̃s���ɊY������
���́A�����T�C�g�����Q�Ɖ������B

�ȉ��̃T�C�g�͒ʐM�v���g�R���ɂ��Ă��ڍׂɐ�������Ă���A���ƎQ�l�ɂȂ�܂����B
�i�قƂ�ǃT�C�g���APS1�̃^�C�~���O�ɂ������y���Ă��Ȃ��̂Łj
http://www.curiousinventor.com/guides/ps2


���C�u�������D�ރs���z�u�́A���� GPSX.c ���ɂăn�[�h�R�[�h����Ă��܂��B
�s�s��������ꍇ�͊e���C�����ĉ������B


Arduino Pin No. | PSX Controller Pin No.
----------------+------------------------
Pin 7           | Pin 1 Data
Pin 6           | Pin 2 Command
                | Pin 3 9V for Motor (Optional)
                | Pin 4 GND
                | Pin 5 VCC (3.3V)
Pin 5           | Pin 6 Attention (PAD1)
Pin 4           | Pin 7 Clock
                | Pin 8 N/C
Pin 3           | Pin 9 ACK

Pin 2           | Pin 6 Attention (PAD2)


���R���g���[����������g��Ȃ��ꍇ�AArduino���Q�ԃs���͎g�p����
�@�K�v�͂���܂���B
�@����ȊO�̃s���́A�R���g���[���P���Q�ŋ��L�ƂȂ�܂��iArduino����
�@�����s���ɐڑ����܂��j
�@�Ȃ����ꂪ�\���Ƃ����܂��ƁA�s�x����ꂽ�R�}���h�ɑ΂��āA���̎�
�@Attention�s�������[�ɂȂ��Ă���R���g���[�������������Ȃ��݌v�ɂȂ���
�@���邽�߂ł��B

���X�u�́A�U���@�\���g�p����ꍇ�ɂ̂ݐڑ����ĉ������B

�@�������߂̃R���t�B�M�����[�V�����́A
�@�@�U���@�\���g�p����ꍇ
�@�@�@�� Arduino�̓���ɁA9V AC�A�_�v�^���g�p�B
�@�@�@�@�R���g���[���̓d���́AArduino���Vin�s�����狟��

�@�@�U���@�\���g�p���Ȃ��ꍇ
�@�@�@�� �R���g���[���̃s���R���ǂ��ɂ��ڑ����Ȃ��B
�@�@�@�@Arduino�͔C�ӂ̓d���d���œ���


�Ȃ��A9�u�ȊO�̓d�����R���g���[�����R�ԃs���ɐڑ�����ƌ듮��
�i�{�^����Ԃ̓ǂݎ��~�X�j�̌����ƂȂ�悤�ł��B


�ȉ��̃s����1k���̃v���A�b�v��R��K�v�Ƃ��܂��B

 * �R���g���[��1,2��Attention�s��(Arduino���Q���T)
 * Data�s���iArduino���V�ԃs��

                  Vcc 5V
                    |
                 (1kOhm)
                    |
   (Arduino Pin)----+----(Controller)


  ���̑��̃s���́A��̃R���g���[���Ԃŋ��L����܂��B


�R���g���[����Arduino�ɐڑ�������@�͉��ʂ肩�l�����܂��B
��߂ȃR���g���[���̃R�l�N�^��؂藎�Ƃ��ăP�[�u���𔍂��o���ɂ�����@��
����܂����A�W�����N�@��Ȃǂ���R�l�N�^����肵�������A�R���g���[����
�g���܂킹�Ă��������m��܂���B

��҂́A�߂�����g�p���Ȃ��Ȃ���PS�R����USB�̕ϊ��킪����܂����̂ŁA
����𕪉����ăR�l�N�^����肵�܂����B


���Ȃ݂ɁAArduino�̓����v���A�b�v��R(���\k���j���g�p�����ꍇ�͐�����
�f�[�^���ǂݎ��܂���ł����B



==============================================================================
3. �֐����t�@�����X
==============================================================================

- ��{�I�ɂ�������֐����A�^�[�Q�b�g�ƂȂ�R���g���[���̔ԍ����w�肷��K�v��
�@����܂��B����ɂ́APSX_PAD1, PSX_PAD2�̓�̃}�N�����g�p�ł��܂��B

- �{�^���̉��������󋵂́APSX.updateState(padNo)�Ăяo�����ɂ̂ݍX�V����܂��B

- �U�����[�^�̉�]��Ԃ�ύX����ɂ́A�Q�̃X�e�b�v���o��K�v������܂��B
  �܂��APSX.motor()�֐��ŏ�Ԃ�ݒ肵�܂��B�ύX�����ݒ�͎���PSX.updateState()
  �֐��Ăяo�����ɔ��f����܂��B



+------------------------+
| PSX.updateState(padNo) |
+------------------------+
  �L�[����������Ԃ��X�V

     padNo  = PSX_PAD1 | PSX_PAD2


    ��L�֐����Ăяo����A�ȉ��̃}�N�����g�p���ă{�^���̏�Ԃ𒲂ׂ܂��B



      *** �L�[�����݉����������Ă��邩 ***
          true�Ȃ�K����int���Afalse�Ȃ�[�����Ԃ�܂��B

      IS_DOWN_LEFT(padNo)
      IS_DOWN_DOWN(padNo)
      IS_DOWN_RIGHT(padNo)
      IS_DOWN_UP(padNo)
      IS_DOWN_START(padNo)
      IS_DOWN_STICK_RIGHT(padNo)
      IS_DOWN_STICK_LEFT(padNo)
      IS_DOWN_SELECT(padNo)

      IS_DOWN_SQUARE(padNo)
      IS_DOWN_CROSS(padNo)
      IS_DOWN_CIRCLE(padNo)
      IS_DOWN_TRIANGLE(padNo)
      IS_DOWN_R1(padNo)
      IS_DOWN_L1(padNo)
      IS_DOWN_R2(padNo)
      IS_DOWN_L2(padNo)


      *** �O��updateState()�֐��Ăяo��������L�[�������ꂽ��
          true�Ȃ�K����int���Afalse�Ȃ�[�����Ԃ�܂��B

      PRESSED_LEFT(padNo)
      PRESSED_DOWN(padNo)
      PRESSED_RIGHT(padNo)
      PRESSED_UP(padNo)
      PRESSED_START(padNo)
      PRESSED_STICK_RIGHT(padNo)
      PRESSED_STICK_LEFT(padNo)
      PRESSED_SELECT(padNo)

      PRESSED_SQUARE(padNo)
      PRESSED_CROSS(padNo)
      PRESSED_CIRCLE(padNo)
      PRESSED_TRIANGLE(padNo)
      PRESSED_R1(padNo)
      PRESSED_L1(padNo)
      PRESSED_R2(padNo)
      PRESSED_L2(padNo)

      RELEASED_LEFT(padNo)
      RELEASED_DOWN(padNo)
      RELEASED_RIGHT(padNo)
      RELEASED_UP(padNo)
      RELEASED_START(padNo)
      RELEASED_STICK_RIGHT(padNo)
      RELEASED_STICK_LEFT(padNo)
      RELEASED_SELECT(padNo)


      *** �O��updateState()�֐��Ăяo��������L�[�������ꂽ��
          true�Ȃ�K����int���Afalse�Ȃ�[�����Ԃ�܂��B

      RELEASED_SQUARE(padNo)
      RELEASED_CROSS(padNo)
      RELEASED_CIRCLE(padNo)
      RELEASED_TRIANGLE(padNo)
      RELEASED_R1(padNo)
      RELEASED_L1(padNo)
      RELEASED_R2(padNo)
      RELEASED_L2(padNo)


      *** �A�i���O�X�e�B�b�N�̒l�ǂݎ��
          0 ���� 255 (0x00 ���� 0xFF) �̒l���Ԃ�܂��B

      ANALOG_RIGHT_X(padNo)
      ANALOG_RIGHT_Y(padNo)
      ANALOG_LEFT_X(padNo)
      ANALOG_LEFT_Y(padNo)



+----------------------------------------------------+
| PSX.motorEnable(padNo, Motor1Enable, Motor2Enable) |
+----------------------------------------------------+
  �U�����[�^�̃I���E�I�t

     padNo         = PSX_PAD1 | PSX_PAD2

     Motor1Enable  = MOTOR1_ENABLE | MOTOR1_DISABLE

     Motor2Enable  = MOTOR2_ENABLE | MOTOR2_DISABLE



+----------------------------------------------------+
| PSX.motor(padNo, Motor1OnOff, uint8_t Motor2Speed) |
+----------------------------------------------------+
  ���[�^�̉�]���x�ύX

     padNo         = PSX_PAD1 | PSX_PAD2

     Motor1OnOff  = MOTOR1_ON | MOTOR1_OFF

     Motor2Speed  = uint8_t between 0 to 255 (0x00 to 0xFF)


  ���̊֐��́A�V������]���x�̒l���Z�b�g���邾���ł��B
  �ύX�́A����PSX.updateState()�֐��Ăяo�����ɔ��f����܂��B

�@���[�^�P�̓I���E�I�t�̂ݐݒ�\�A
�@���[�^�Q�͉�]���x��ݒ�ł��܂��B



+-----------------------------+
| PSX.mode(padNo, mode, lock) |
+-----------------------------+
 �A�i���O/�f�W�^�����[�h�̐؂�ւ�

     padNo  = PSX_PAD1 | PSX_PAD2

     mode   = MODE_DIGITAL | MODE_ANALOG

     lock   = MODE_UNLOCK | MODE_LOCK


�@���b�N��L���ɂ����ꍇ�A�R���g���[�����Analog�{�^���Ń��[�U���C�ӂ�
�@���[�h��؂�ւ��邱�Ƃ��ł��Ȃ��Ȃ�܂��B



==============================================================================
4. ���쒆�Ƀn�}�����ӏ�
==============================================================================

�o�r�P���Q�̃R���g���[���́A�z�X�g����f�[�^���P�o�C�g��M����x��ACK�s������u
���[�ɂ��邱�Ƃ��e��T�C�g�ŉ������Ă��܂��B
�������A�o�r�P�͂Ƃ������Q�̃R���g���[���́A����ACK���Ԃ����܂�ɒZ�������āA
Arduino�̃N���b�N���x�Ń|�[�����O���邱�Ƃ��ł��܂���ł����B
���̕ӂ�Ő����n�}������AACK�s���ɂ�鉞���𖳎����āA�K���Ȋԍ����Ńo�C�g��
���M���������Ƃ��낷��Ȃ蓮�삵�܂����B
���Ȃ��Ƃ��A�茳�ɂ���Sony������DualShock2����уA�i���O�U���p�b�h(HORI)�ł�
�����Ƃ����肵�Ă���悤�Ɍ������^�C�~���O�ɒ������Ă���܂��B
�i�c�O�Ȃ��烍�W�A�i���̌v��������L���Ă��Ȃ����̂Łj

���C�u�����̌��݂̃o�[�W�����́A�P���ɂX�o�C�g���M���ĉ������݂Ă��܂��B
���ۂɂ̓R���g���[������Ԃ�Q�o�C�g�ڂɎc��̎�M�o�C�g�����܂܂�Ă���̂ł����c
���݂̂Ƃ��돈���͏ȗ�


==============================================================================
5. ���̑�
==============================================================================

* ���݁A����^�C�~���O��PS2�ɂ̂ݍ��킹�Ē������Ă���܂��B

* �R���g���[���Q�̓����g�p�͍�ґ��ł͖����؂ł����A���_��͖��Ȃ��͂��ł��B


���t���T���v���ɂ��āi���{��h�L�������g�̂݁j

���C�u�������񋟂����ʂ�̋@�\�����؂ł���悤�ɂȂ��Ă��܂��B

* �N�����ɁA�R���g���[���̓A�i���O���[�h�̂܂܃��b�N����Ă���A�p�b�h��̃{�^���ł�
�@�ύX�ł��Ȃ��悤�ɂȂ��Ă��܂��B

* �l�p�{�^���Ƃw�{�^���́A�p�b�h�̃A�i���O/�f�W�^�����[�h��؂�ւ��܂��B
�@���̎��_�Ń��b�N�͉�������AAnalog�{�^���Ń��[�U���C�ӂɃ��[�h�ؑ։\�ł��B

* ���{�^�������������́A���[�^�P����]���܂��B

* �O�p�{�^�������������A���[�^�Q����]���܂��B
�@�܂��A���̂Ƃ����X�e�B�b�N�̂w������]���x�Ɋ��蓖�Ă��Ă��܂��B
