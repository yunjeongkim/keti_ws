# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from keti_msgs/MoConf.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class MoConf(genpy.Message):
  _md5sum = "88553aee21526e55707e4beec0e2dbf9"
  _type = "keti_msgs/MoConf"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """bool APM_En
bool APM_IGNORE
uint8 APM_Slevel
uint8 ASM_En
bool ACC_StopReq
uint8 Mo_AlvCnt
"""
  __slots__ = ['APM_En','APM_IGNORE','APM_Slevel','ASM_En','ACC_StopReq','Mo_AlvCnt']
  _slot_types = ['bool','bool','uint8','uint8','bool','uint8']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       APM_En,APM_IGNORE,APM_Slevel,ASM_En,ACC_StopReq,Mo_AlvCnt

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(MoConf, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.APM_En is None:
        self.APM_En = False
      if self.APM_IGNORE is None:
        self.APM_IGNORE = False
      if self.APM_Slevel is None:
        self.APM_Slevel = 0
      if self.ASM_En is None:
        self.ASM_En = 0
      if self.ACC_StopReq is None:
        self.ACC_StopReq = False
      if self.Mo_AlvCnt is None:
        self.Mo_AlvCnt = 0
    else:
      self.APM_En = False
      self.APM_IGNORE = False
      self.APM_Slevel = 0
      self.ASM_En = 0
      self.ACC_StopReq = False
      self.Mo_AlvCnt = 0

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_6B().pack(_x.APM_En, _x.APM_IGNORE, _x.APM_Slevel, _x.ASM_En, _x.ACC_StopReq, _x.Mo_AlvCnt))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      _x = self
      start = end
      end += 6
      (_x.APM_En, _x.APM_IGNORE, _x.APM_Slevel, _x.ASM_En, _x.ACC_StopReq, _x.Mo_AlvCnt,) = _get_struct_6B().unpack(str[start:end])
      self.APM_En = bool(self.APM_En)
      self.APM_IGNORE = bool(self.APM_IGNORE)
      self.ACC_StopReq = bool(self.ACC_StopReq)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_6B().pack(_x.APM_En, _x.APM_IGNORE, _x.APM_Slevel, _x.ASM_En, _x.ACC_StopReq, _x.Mo_AlvCnt))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      _x = self
      start = end
      end += 6
      (_x.APM_En, _x.APM_IGNORE, _x.APM_Slevel, _x.ASM_En, _x.ACC_StopReq, _x.Mo_AlvCnt,) = _get_struct_6B().unpack(str[start:end])
      self.APM_En = bool(self.APM_En)
      self.APM_IGNORE = bool(self.APM_IGNORE)
      self.ACC_StopReq = bool(self.ACC_StopReq)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_6B = None
def _get_struct_6B():
    global _struct_6B
    if _struct_6B is None:
        _struct_6B = struct.Struct("<6B")
    return _struct_6B
